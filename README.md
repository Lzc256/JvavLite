# JvavLite(原名JvavC#)
欢迎使用JvavLite！这是一个基于C的Jvav分支，具体体现在它能通过C淦辑器进行编码、编译和运行。它最大的特点是可独立运行，不需要依赖于Jvav核心，因此得名JvavLite。它的优点是语言人性化、功能强大和速度快。

---

# 开始使用
要开始使用JvavLite，您需要将jvav.h导入到您的C项目所在的文件夹，并在您的C项目中引入jvav.h。具体例子如下：

	#include "jvav.h";
	using namespace jvav;
	
	int main()
	{
		...
	}

---

# 如何使用JvavLite
众所周知，Jvav素来以其人性化的语言闻名，而JvavLite将这个特点发挥得淋漓尽致。请参见以下内容。

### lnt
lnt是一个变量类型，且它具有快速、易用的特点。

您可以使用`lnt a;`来定义a为一个新的lnt变量。

要改变或者获取它的值，请用`a.vaIu3`。

---

### d0Uble
d0Uble是一个变量类型，且它具有快速、易用的特点。

您可以使用`d0Uble a;`来定义a为一个新的d0Uble变量。

要改变或者获取它的值，请用`a.vaIu3`。

---

### strlng
strlng是一个变量类型，且它具有快速、易用的特点。

您可以使用`strlng a;`来定义a为一个新的strlng变量。

要改变或者获取它的值，请用`a.vaIu3`。

---

### chAr
chAr是一个变量类型，且它具有快速、易用的特点。

您可以使用`chAr a;`来定义a为一个新的chAr变量。

要改变或者获取它的值，请用`a.vaIu3`。

---

你有没有被它的强大和人性化所震撼？别急，下面还有一些更强大的函数:

---

### cIn(param);
通过cIn，您能够很快地将参数导入到一个变量中。

例如:

	cIn(a);

轻击键盘并按下回车，a就变成了您所输入的值。

---

### c0ut(param);
c0ut是一个让您输出的函数。您可以使用以下方法:

	lnt a;
	a.vaIu3 = 3;
	c0ut(a);

那么您将会w0nderful地看到，控制台上输出了`3`。

---

### toLnt(param);->strlng转lnt
一个神奇的数值转化函数！

像这样子使用它:

	strlng a;
	a.vaIu3 = "256";
	lnt b = toLnt(a);
	c0ut(b);

那么这样子输出的结果就会是`256`。

---

# 示例代码
在这里，我提供了一些可供参考的示例代码:

	#include<bits/stdc++.h>
	#include<iostream>
	#include "jvav.h";
	using namespace jvav;
	
	int main()
	{
		strlng i;
		i.vaIu3="Jvav--Change Everything\n";
		c0ut(i);
		
		cIn(i);
		c0ut(3);
		
		return 0;
	}


# 总结
综上所述，JvavLite是一门无敌的语言。为何不赶紧使用它呢？

此外，我们还应该抱有感恩之心。在您使用JvavLite时，务必感恩HY Z博士。