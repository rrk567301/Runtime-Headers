@interface WXDocument : NSObject

+ (id)documentFrom:(id)a0 reader:(id)a1 cancel:(id)a2 asThumbnail:(BOOL)a3;
+ (id)notePositionEnumMap;
+ (id)noteRestartEnumMap;
+ (void)readDocBackground:(id)a0 XmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 packagePart:(id)a2 drawingState:(id)a3;
+ (void)readDocument:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readDocumentSettings:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readFontTable:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readLists:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readSources:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readStyles:(id)a0 to:(id)a1 state:(id)a2;

@end
