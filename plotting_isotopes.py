#reading isotope0,1,2
import pandas as pd
import matplotlib.pyplot as plt

iso0 = pd.read_csv("Iso1.csv")
# df[df.columns[2]]
iso0_plot = plt.scatter(iso0.iloc[:, 0], iso0.iloc[:, 1])
iso0_plot_l = plt.plot(iso0.iloc[:, 0], iso0.iloc[:, 1])

# plt.show()


iso1 = pd.read_csv("Iso2.csv")
# df[df.columns[2]]
iso1_plot = plt.scatter(iso1.iloc[:, 0], iso1.iloc[:, 1])
iso1_plot_l = plt.plot(iso1.iloc[:, 0], iso1.iloc[:, 1])

# plt.show()


iso2 = pd.read_csv("Iso3.csv")
# df[df.columns[2]]
iso2_plot = plt.scatter(iso2.iloc[:, 0], iso2.iloc[:, 1])
iso2_plot_l = plt.plot(iso2.iloc[:, 0], iso2.iloc[:, 1])


plt.legend((iso0_plot, iso1_plot,  iso2_plot),
			("Iso0", "Iso1",  "Iso2"))
plt.xlabel('Retention time (min)')
plt.ylabel('Intensities')
plt.title("XIC ")
plt.show()
