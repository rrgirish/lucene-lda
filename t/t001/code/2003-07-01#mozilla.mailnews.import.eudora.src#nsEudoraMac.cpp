nscomptr
nsicomponentmanager
nsiservicemanager
nsimsgaccountmanager
nsimsgaccount
nsmsgbasecid
nsmsgcompcid
nsismtpservice
nsismtpserver
nseudoramac
nsiimportservice
nsiimportmailboxdescriptor
nsiimportabdescriptor
nsspecialsystemdirectory
nseudorastringbundle
nseudoraimport
nsipopincomingserver
nsreadableutils
nsunicharutils
eudoradebuglog
resources
files
textutils
ifdef
xpmacosx
nsilocalfilemac
morefilesx
nsresult
nsfilespectoilocalfilemac
nsfilespec
aspec
nsilocalfilemac
alocalfilemac
nscomptr
nsilocalfile
localfile
nsresult
rv
nsfilespectoifile
aspec
getteraddrefs
localfile
nsensuresuccess
rv
rv
nscomptr
nsilocalfilemac
macfile
doqueryinterface
localfile
macfile
nserrorfailure
nsifaddref
alocalfilemac
macfile
nsok
morefiles
morefilesextras
endif
nsdefineiid
kisupportsiid
nsisupportsiid
nsdefinecid
kcomponentmanagercid
nscomponentmanagercid
kwhitespace
nseudoramac
nseudoramac
mmailimportlocation
nsnull
nseudoramac
nseudoramac
nsifrelease
mmailimportlocation
prbool
nseudoramac
findmailfolder
nsifilespec
pfolder
findeudoralocation
pfolder
prbool
nseudoramac
findeudoralocation
nsifilespec
pfolder
prbool
findini
nsifilespec
plookin
prbool
result
prfalse
plookin
nsspecialsystemdirectory
sysdir
nsspecialsystemdirectory
macsystemdirectory
pfolder
setfromfilespec
sysdir
pfolder
appendrelativeunixpath
eudora
folder
prbool
link
prfalse
nsresult
rv
pfolder
issymlink
link
nssucceeded
rv
link
rv
pfolder
resolvesymlink
nsfailed
rv
prfalse
pfolder
fromfilespec
plookin
prbool
exists
prfalse
nsresult
rv
pfolder
exists
exists
prbool
isfolder
prfalse
nssucceeded
rv
exists
rv
pfolder
isdirectory
isfolder
exists
isfolder
prfalse
nsfilespec
pref
prbool
foundpref
prfalse
nscomptr
nsidirectoryiterator
dir
rv
nsnewdirectoryiterator
getteraddrefs
dir
nssucceeded
rv
dir
exists
prfalse
rv
dir
init
pfolder
prtrue
nssucceeded
rv
rv
dir
exists
exists
nscomptr
nsifilespec
entry
count
ostype
type
creator
exists
nssucceeded
rv
count
rv
dir
getcurrentspec
getteraddrefs
entry
nssucceeded
rv
nsfilespec
spec
rv
entry
getfilespec
spec
nssucceeded
rv
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
spec
getteraddrefs
macfile
nssucceeded
rv
macfile
getfilecreator
creator
macfile
getfiletype
type
rv
spec
getfiletypeandcreator
type
creator
endif
nssucceeded
rv
type
text
creator
csom
count
type
pref
creator
csom
foundpref
pref
spec
foundpref
prtrue
pleafname
spec
getleafname
prbool
isbk
prfalse
print
len
pleafname
len
strlen
pleafname
len
isbk
nscrt
strcasecmp
pleafname
len
bkup
nscrt
free
pleafname
isbk
pleafname
pref
getleafname
pleafname
len
strlen
pleafname
len
isbk
nscrt
strcasecmp
pleafname
len
bkup
nscrt
free
pleafname
isbk
pref
spec
nsfilespec
timestamp
moddate
moddate
spec
getmoddate
moddate
pref
getmoddate
moddate
moddate
moddate
pref
spec
rv
dir
next
nssucceeded
rv
rv
dir
exists
exists
count
result
prtrue
findini
result
foundpref
prfalse
pfolder
setfromfilespec
pref
prtrue
nsresult
nseudoramac
findmailboxes
nsifilespec
proot
nsisupportsarray
pparray
nsresult
rv
nsnewisupportsarray
pparray
nsfailed
rv
importlog
failed
to
allocate
the
nsisupportsarray
rv
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
rv
nsfailed
rv
rv
mdepth
nsifrelease
mmailimportlocation
mmailimportlocation
proot
nsifaddref
mmailimportlocation
scanmaildir
proot
pparray
impsvc
nsresult
nseudoramac
scanmaildir
nsifilespec
pfolder
nsisupportsarray
parray
nsiimportservice
pimport
mdepth
nsresult
rv
iteratemaildir
pfolder
parray
pimport
mdepth
rv
nsresult
nseudoramac
iteratemaildir
nsifilespec
pfolder
nsisupportsarray
parray
nsiimportservice
pimport
nscomptr
nsidirectoryiterator
dir
nsresult
rv
nsnewdirectoryiterator
getteraddrefs
dir
nsfailed
rv
rv
prbool
exists
prfalse
rv
dir
init
pfolder
prtrue
nsfailed
rv
rv
rv
dir
exists
exists
nsfailed
rv
rv
prbool
isfolder
prbool
isfile
nscomptr
nsifilespec
entry
pname
nscstring
fname
nscstring
ext
nscstring
name
nsfilespec
spec
ostype
type
ostype
creator
exists
nssucceeded
rv
rv
dir
getcurrentspec
getteraddrefs
entry
nssucceeded
rv
isfolder
prfalse
isfile
prfalse
pname
nsnull
rv
entry
isdirectory
isfolder
rv
entry
isfile
isfile
rv
entry
getleafname
pname
nssucceeded
rv
pname
fname
pname
nscrt
free
pname
isfolder
isvalidmailfoldername
fname
rv
foundmailfolder
entry
fname
get
parray
pimport
nssucceeded
rv
rv
scanmaildir
entry
parray
pimport
nsfailed
rv
importlog
error
scanning
mail
directory
isfile
rv
entry
getfilespec
spec
nssucceeded
rv
type
creator
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
spec
getteraddrefs
macfile
nssucceeded
rv
macfile
getfilecreator
creator
macfile
getfiletype
type
spec
getfiletypeandcreator
type
creator
endif
type
text
isvalidmailboxname
fname
isvalidmailboxfile
entry
rv
foundmailbox
entry
fname
get
parray
pimport
rv
dir
next
nssucceeded
rv
rv
dir
exists
exists
rv
nsresult
nseudoramac
foundmailbox
nsifilespec
mailfile
pname
nsisupportsarray
parray
nsiimportservice
pimport
nsstring
displayname
nscomptr
nsiimportmailboxdescriptor
desc
nsisupports
pinterface
converttounicode
pname
displayname
ifdef
importdebug
ppath
nsnull
mailfile
getnativepath
ppath
ppath
importlog
found
eudora
mailbox
ppath
pname
nscrt
free
ppath
importlog
found
eudora
mailbox
pname
importlog
tmdepth
mdepth
endif
nsresult
rv
pimport
createnewmailboxdescriptor
getteraddrefs
desc
nssucceeded
rv
pruint
sz
mailfile
getfilesize
sz
desc
setdisplayname
displayname
get
desc
setdepth
mdepth
desc
setsize
sz
nsifilespec
pspec
nsnull
desc
getfilespec
pspec
pspec
pspec
fromfilespec
mailfile
nsrelease
pspec
rv
desc
queryinterface
kisupportsiid
pinterface
parray
appendelement
pinterface
pinterface
release
nsok
nsresult
nseudoramac
foundmailfolder
nsifilespec
mailfolder
pname
nsisupportsarray
parray
nsiimportservice
pimport
nsstring
displayname
nscomptr
nsiimportmailboxdescriptor
desc
nsisupports
pinterface
converttounicode
pname
displayname
ifdef
importdebug
ppath
nsnull
mailfolder
getnativepath
ppath
ppath
importlog
found
eudora
folder
ppath
pname
nscrt
free
ppath
importlog
found
eudora
folder
pname
importlog
tmdepth
mdepth
endif
nsresult
rv
pimport
createnewmailboxdescriptor
getteraddrefs
desc
nssucceeded
rv
pruint
sz
desc
setdisplayname
displayname
get
desc
setdepth
mdepth
desc
setsize
sz
nsifilespec
pspec
nsnull
desc
getfilespec
pspec
pspec
pspec
fromfilespec
mailfolder
nsrelease
pspec
rv
desc
queryinterface
kisupportsiid
pinterface
parray
appendelement
pinterface
pinterface
release
nsok
prbool
nseudoramac
createtocfromresource
nsifilespec
pmail
nsifilespec
ptoc
nsfilespec
spec
nsresult
rv
pmail
getfilespec
spec
nsfailed
rv
prfalse
resfile
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
spec
getteraddrefs
macfile
nsfailed
rv
prfalse
fsspec
fsspec
rv
macfile
getfsspec
fsspec
nsfailed
rv
prfalse
resfile
fspopenresfile
fsspec
fsrdperm
resfile
fspopenresfile
spec
getfsspecptr
fsrdperm
endif
resfile
prfalse
handle
resh
nil
max
countresources
tocf
max
resh
getindresource
tocf
prbool
result
prfalse
resh
print
sz
print
gethandlesize
resh
sz
nsspecialsystemdirectory
dir
nsspecialsystemdirectory
ostemporarydirectory
rv
ptoc
setfromfilespec
dir
nssucceeded
rv
rv
ptoc
appendrelativeunixpath
temp
toc
nssucceeded
rv
rv
ptoc
makeunique
nssucceeded
rv
rv
ptoc
openstreamforwriting
nssucceeded
rv
hlock
resh
print
written
rv
ptoc
write
resh
sz
written
hunlock
resh
ptoc
closestream
nsfailed
rv
written
sz
ptoc
getfilespec
spec
spec
delete
prfalse
result
prtrue
releaseresource
resh
closeresfile
resfile
result
nsresult
nseudoramac
findtocfile
nsifilespec
pmailfile
nsifilespec
pptocfile
prbool
pdeletetoc
nsresult
rv
pname
nsnull
pdeletetoc
prfalse
pptocfile
nsnull
rv
pmailfile
getleafname
pname
nsfailed
rv
rv
rv
pmailfile
getparent
pptocfile
nsfailed
rv
rv
nscstring
leaf
pname
nscrt
free
pname
leaf
append
toc
ostype
type
ostype
creator
prbool
exists
prfalse
prbool
isfile
prfalse
rv
pptocfile
appendrelativeunixpath
leaf
get
nssucceeded
rv
rv
pptocfile
exists
exists
nssucceeded
rv
exists
rv
pptocfile
isfile
isfile
isfile
nsfilespec
spec
rv
pptocfile
getfilespec
spec
nssucceeded
rv
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
spec
getteraddrefs
macfile
nssucceeded
rv
macfile
getfilecreator
creator
macfile
getfiletype
type
spec
getfiletypeandcreator
type
creator
endif
exists
isfile
type
tocf
creator
csom
nsok
createtocfromresource
pmailfile
pptocfile
pdeletetoc
prtrue
nsok
nserrorfailure
define
knumsettingstrs
define
ksmtpserverstr
define
kpopaccountnamestr
define
kpopserverstr
define
kreturnaddressstr
define
kfullnamestr
define
kleaveonserverstr
define
ksmtpserverid
define
kemailaddressid
define
kreturnaddressid
define
kfullnameid
define
kleavemailonserverid
prbool
nseudoramac
getsettingsfromresource
nsifilespec
psettings
resid
nscstring
pstrs
prbool
pimap
pimap
prfalse
nsfilespec
spec
nsresult
rv
psettings
getfilespec
spec
nsfailed
rv
prfalse
resfile
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
spec
getteraddrefs
macfile
nsfailed
rv
prfalse
fsspec
fsspec
rv
macfile
getfsspec
fsspec
nsfailed
rv
prfalse
resfile
fspopenresfile
fsspec
fsrdperm
resfile
fspopenresfile
spec
getfsspecptr
fsrdperm
endif
resfile
prfalse
handle
resh
getresource
str
resid
idx
resh
releaseresource
resh
stringptr
pstr
stringptr
thestr
pstr
stringptr
pruint
pstr
getindstring
pstr
resid
ksmtpserverid
getindstring
pstr
resid
kemailaddressid
getindstring
pstr
resid
kreturnaddressid
getindstring
pstr
resid
kfullnameid
getindstring
pstr
resid
kleavemailonserverid
closeresfile
resfile
thestr
pstr
thestr
pstrs
append
thestr
thestr
thestr
pstr
thestr
idx
idx
thestr
thestr
idx
idx
idx
thestr
pruint
save
thestr
thestr
idx
thestr
pstrs
append
thestr
thestr
thestr
save
idx
thestr
idx
thestr
idx
thestr
idx
pstrs
append
thestr
idx
thestr
idx
thestr
pstr
thestr
pstrs
append
thestr
thestr
thestr
pstr
thestr
pstrs
append
thestr
thestr
thestr
pstr
thestr
thestr
pstrs
pstrs
pstr
prtrue
closeresfile
resfile
prfalse
prbool
nseudoramac
importsettings
nsifilespec
pinifile
nsimsgaccount
localmailaccount
nsresult
rv
nscomptr
nsimsgaccountmanager
accmgr
dogetservice
nsmsgaccountmanagercontractid
rv
nsfailed
rv
importlog
failed
to
create
account
manager
prfalse
baseresid
nscstring
pstrs
nscstring
knumsettingstrs
knumsettingstrs
pstrs
nscstring
nsstring
accname
nsliteralstring
eudora
settings
nseudorastringbundle
getstringbyid
eudoraimportaccountname
accname
prbool
isimap
prfalse
popcount
accounts
nsimsgaccount
paccount
baseresid
isimap
prfalse
getsettingsfromresource
pinifile
baseresid
pstrs
isimap
paccount
nsnull
isimap
buildpopaccount
accmgr
pstrs
paccount
accname
accounts
popcount
popcount
localmailaccount
localmailaccount
nsrelease
localmailaccount
localmailaccount
nsnull
localmailaccount
localmailaccount
paccount
nsifaddref
paccount
buildimapaccount
accmgr
pstrs
paccount
accname
accounts
paccount
baseresid
accmgr
setdefaultaccount
paccount
nsifrelease
paccount
baseresid
baseresid
knumsettingstrs
pstrs
truncate
rv
accmgr
saveaccountinfo
nsassertion
nssucceeded
rv
can
save
account
info
to
pref
file
knumsettingstrs
pstrs
pstrs
accounts
prbool
nseudoramac
buildpopaccount
nsimsgaccountmanager
accmgr
nscstring
pstrs
nsimsgaccount
ppaccount
nsstring
accname
ppaccount
ppaccount
nsnull
pstrs
kpopserverstr
length
pstrs
kpopaccountnamestr
length
prfalse
prbool
result
prfalse
nscomptr
nsimsgincomingserver
in
nsresult
rv
accmgr
findserver
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
pop
getteraddrefs
in
nsfailed
rv
in
nsnull
rv
accmgr
createincomingserver
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
pop
getteraddrefs
in
nssucceeded
rv
in
rv
in
settype
pop
importlog
created
pop
server
named
username
pstrs
kpopserverstr
get
pstrs
kpopaccountnamestr
get
prunichar
pretty
tonewunicode
accname
importlog
tset
pretty
name
to
pretty
rv
in
setprettyname
pretty
nscrt
free
pretty
nscomptr
nsimsgaccount
account
rv
accmgr
createaccount
getteraddrefs
account
nssucceeded
rv
account
rv
account
setincomingserver
in
importlog
created
account
set
the
incoming
server
to
the
pop
server
nscomptr
nsipopincomingserver
popserver
doqueryinterface
in
rv
nsensuresuccess
rv
rv
popserver
setleavemessagesonserver
pstrs
kleaveonserverstr
first
prtrue
prfalse
setidentities
accmgr
account
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
pstrs
result
prtrue
ppaccount
account
queryinterface
nsgetiid
nsimsgaccount
ppaccount
result
prtrue
result
prbool
nseudoramac
buildimapaccount
nsimsgaccountmanager
accmgr
nscstring
pstrs
nsimsgaccount
ppaccount
nsstring
accname
pstrs
kpopserverstr
length
pstrs
kpopaccountnamestr
length
prfalse
prbool
result
prfalse
nscomptr
nsimsgincomingserver
in
nsresult
rv
accmgr
findserver
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
imap
getteraddrefs
in
nsfailed
rv
in
nsnull
rv
accmgr
createincomingserver
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
imap
getteraddrefs
in
nssucceeded
rv
in
rv
in
settype
imap
importlog
created
imap
server
named
username
pstrs
kpopserverstr
get
pstrs
kpopaccountnamestr
get
prunichar
pretty
tonewunicode
accname
importlog
tset
pretty
name
to
pretty
rv
in
setprettyname
pretty
nscrt
free
pretty
nscomptr
nsimsgaccount
account
rv
accmgr
createaccount
getteraddrefs
account
nssucceeded
rv
account
rv
account
setincomingserver
in
importlog
created
an
account
set
the
imap
server
as
the
incoming
server
setidentities
accmgr
account
pstrs
kpopaccountnamestr
get
pstrs
kpopserverstr
get
pstrs
result
prtrue
ppaccount
account
queryinterface
nsgetiid
nsimsgaccount
ppaccount
result
prtrue
result
nseudoramac
setidentities
nsimsgaccountmanager
accmgr
nsimsgaccount
acc
username
servername
nscstring
pstrs
nsresult
rv
nscomptr
nsimsgidentity
id
rv
accmgr
createidentity
getteraddrefs
id
id
nsautostring
fullname
pstrs
kfullnamestr
length
fullname
assignwithconversion
pstrs
kfullnamestr
get
id
setfullname
fullname
get
id
setidentityname
fullname
get
pstrs
kreturnaddressstr
length
id
setemail
pstrs
kreturnaddressstr
get
nscautostring
emailaddress
emailaddress
username
emailaddress
emailaddress
servername
id
setemail
emailaddress
get
acc
addidentity
id
importlog
created
identity
added
to
the
account
importlog
tname
pstrs
kfullnamestr
get
importlog
temail
pstrs
kreturnaddressstr
get
setsmtpserver
accmgr
acc
pstrs
ksmtpserverstr
get
username
nseudoramac
setsmtpserver
nsimsgaccountmanager
pmgr
nsimsgaccount
pacc
pserver
puser
nsresult
rv
nscomptr
nsismtpservice
smtpservice
dogetservice
nssmtpservicecontractid
rv
nssucceeded
rv
smtpservice
nscomptr
nsismtpserver
foundserver
rv
smtpservice
findserver
puser
pserver
getteraddrefs
foundserver
nssucceeded
rv
foundserver
importlog
smtp
server
already
exists
pserver
nscomptr
nsismtpserver
smtpserver
rv
smtpservice
createsmtpserver
getteraddrefs
smtpserver
nssucceeded
rv
smtpserver
smtpserver
sethostname
pserver
puser
smtpserver
setusername
puser
importlog
created
smtp
server
pserver
nsresult
nseudoramac
getattachmentinfo
pfilename
nsifilespec
pspec
nscstring
mimetype
mimetype
truncate
ostype
type
ostype
creator
pruint
fnum
prunichar
nscstring
str
pfilename
str
length
nscstring
filenum
nscstring
types
str
right
filenum
filenum
charat
filenum
charat
fnum
filenum
charat
fnum
fnum
fnum
str
left
filenum
str
length
str
filenum
str
trim
kwhitespace
str
right
types
types
charat
types
charat
types
charat
type
pruint
types
charat
type
pruint
types
charat
type
types
charat
type
types
charat
creator
pruint
types
charat
creator
pruint
types
charat
creator
types
charat
creator
types
charat
str
left
types
str
length
str
types
str
trim
kwhitespace
fnum
ifdef
importdebug
nscstring
typestr
nscstring
creatstr
creatstr
append
creator
typestr
append
type
importlog
tattachment
type
creator
filenum
ld
typestr
get
creatstr
get
fnum
importlog
tattachment
file
name
str
get
endif
fsspec
spec
memset
spec
spec
ifdef
xpmacosx
nsresult
rv
pspec
setnativepath
str
get
nsfailed
rv
importlog
tfailed
to
set
path
rv
nsfilespec
tempfilespec
rv
pspec
getfilespec
tempfilespec
nsfailed
rv
importlog
tfailed
to
get
file
spec
rv
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
tempfilespec
getteraddrefs
macfile
nsfailed
rv
importlog
tfailed
to
get
local
mac
file
rv
rv
macfile
getfsspec
spec
nsfailed
rv
importlog
tfailed
to
get
fsspec
rv
nscstring
filename
str
charat
str
last
str
mid
filename
str
length
str
filename
print
idx
str
findchar
idx
nserrorfailure
nscstring
volumename
str
left
volumename
idx
str
right
filename
str
length
idx
str
str
vrefnum
volumename
length
memcpy
str
volumename
get
str
memcpy
str
volumename
get
volumename
length
str
volumename
length
oserr
err
determinevrefnum
str
vrefnum
err
noerr
importlog
error
cannot
find
volume
ref
num
nserrorfailure
err
fspresolvefileidref
nil
vrefnum
fnum
spec
err
noerr
importlog
error
cannot
resolve
fileidref
ld
err
nserrorfailure
finfo
finfo
err
fspgetfinfo
spec
finfo
err
noerr
finfo
fdtype
ostype
type
importlog
error
file
type
does
match
nserrorfailure
nsfilespec
fspec
spec
pspec
setfromfilespec
fspec
endif
ifdef
xpmacosx
hasresourcefork
spec
datasize
rsrcsize
err
fspgetfilesize
spec
datasize
rsrcsize
rsrcsize
endif
mimetype
application
applefile
mimetype
application
octet
stream
importlog
tmimetype
mimetype
get
nsok
prbool
nseudoramac
hasresourcefork
fsspec
fsspec
fsref
fsref
fspmakefsref
fsspec
fsref
noerr
fscataloginfo
cataloginfo
oserr
err
fsgetcataloginfo
fsref
kfscatinforsrcsizes
cataloginfo
nsnull
nsnull
nsnull
err
noerr
cataloginfo
rsrclogicalsize
prfalse
define
knumbadfoldernames
cbadfoldernames
knumbadfoldernames
attachments
folder
eudora
items
nicknames
folder
parts
folder
signature
folder
spool
folder
stationery
folder
prbool
nseudoramac
isvalidmailfoldername
nscstring
name
mdepth
prtrue
knumbadfoldernames
name
equals
cbadfoldernames
nscaseinsensitivecstringcomparator
prfalse
prtrue
prbool
nseudoramac
isvalidmailboxname
nscstring
fname
mdepth
prtrue
fname
equals
nsliteralcstring
eudora
nicknames
nscaseinsensitivecstringcomparator
prfalse
prtrue
prbool
nseudoramac
isvalidmailboxfile
nsifilespec
pfile
pruint
size
nsresult
rv
pfile
getfilesize
size
size
size
prfalse
rv
pfile
openstreamforreading
nsfailed
rv
prfalse
print
read
buffer
pbuf
buffer
rv
pfile
read
pbuf
read
pfile
closestream
nsfailed
rv
read
prfalse
buffer
nscrt
strcmp
buffer
from
prfalse
prtrue
prbool
nseudoramac
findaddressfolder
nsifilespec
pfolder
findeudoralocation
pfolder
nsresult
nseudoramac
findaddressbooks
nsifilespec
proot
nsisupportsarray
pparray
nscomptr
nsifilespec
spec
nsresult
rv
nsnewfilespec
getteraddrefs
spec
nsfailed
rv
rv
rv
spec
fromfilespec
proot
nsfailed
rv
rv
rv
nsnewisupportsarray
pparray
nsfailed
rv
importlog
failed
to
allocate
the
nsisupportsarray
rv
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
rv
nsfailed
rv
rv
nsstring
displayname
nseudorastringbundle
getstringbyid
eudoraimportnicknamesname
displayname
pruint
sz
rv
spec
appendrelativeunixpath
eudora
nicknames
prbool
exists
prfalse
prbool
isfile
prfalse
nssucceeded
rv
rv
spec
exists
exists
nssucceeded
rv
exists
rv
spec
isfile
isfile
nscomptr
nsiimportabdescriptor
desc
nsisupports
pinterface
exists
isfile
rv
impsvc
createnewabdescriptor
getteraddrefs
desc
nssucceeded
rv
sz
spec
getfilesize
sz
desc
setpreferredname
displayname
get
desc
setsize
sz
nsifilespec
pspec
nsnull
desc
getfilespec
pspec
pspec
pspec
fromfilespec
spec
nsrelease
pspec
rv
desc
queryinterface
kisupportsiid
pinterface
pparray
appendelement
pinterface
pinterface
release
nsfailed
rv
importlog
error
creating
address
book
descriptor
eudora
nicknames
rv
rv
spec
fromfilespec
proot
nssucceeded
rv
rv
spec
appendrelativeunixpath
nicknames
folder
exists
prfalse
prbool
isdir
prfalse
nssucceeded
rv
rv
spec
exists
exists
nssucceeded
rv
exists
rv
spec
isdirectory
isdir
isdir
nsok
nscomptr
nsidirectoryiterator
dir
rv
nsnewdirectoryiterator
getteraddrefs
dir
nsfailed
rv
rv
exists
prfalse
rv
dir
init
spec
prtrue
nsfailed
rv
rv
rv
dir
exists
exists
nsfailed
rv
rv
pname
nsfilespec
fspec
ostype
type
ostype
creator
exists
nssucceeded
rv
rv
dir
getcurrentspec
getteraddrefs
spec
nssucceeded
rv
isfile
prfalse
pname
nsnull
rv
spec
isfile
isfile
rv
spec
getleafname
pname
pname
converttounicode
pname
displayname
nscrt
free
pname
nssucceeded
rv
pname
isfile
rv
spec
getfilespec
fspec
nssucceeded
rv
type
creator
ifdef
xpmacosx
nscomptr
nsilocalfilemac
macfile
rv
nsfilespectoilocalfilemac
fspec
getteraddrefs
macfile
nssucceeded
rv
macfile
getfilecreator
creator
macfile
getfiletype
type
fspec
getfiletypeandcreator
type
creator
endif
type
text
rv
impsvc
createnewabdescriptor
getteraddrefs
desc
nssucceeded
rv
sz
spec
getfilesize
sz
desc
setpreferredname
displayname
get
desc
setsize
sz
nsifilespec
pspec
nsnull
desc
getfilespec
pspec
pspec
pspec
fromfilespec
spec
nsrelease
pspec
rv
desc
queryinterface
kisupportsiid
pinterface
pparray
appendelement
pinterface
pinterface
release
nsfailed
rv
importlog
error
creating
address
book
descriptor
eudora
address
book
rv
rv
dir
next
nssucceeded
rv
rv
dir
exists
exists
rv