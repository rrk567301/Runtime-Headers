@class NSString, NSData, PMPrinterDestination;

@interface PMPrintServiceBrowserNode : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSString *comment;
@property (copy) NSData *iconData;
@property (copy) PMPrinterDestination *printer;
@property (copy) NSString *privateIdentifier;
@property (readonly) BOOL isRoot;

+ (id)dictsFromArray:(id)a0;
+ (id)nodesFromArray:(id)a0 isRoot:(BOOL)a1 context:(id)a2;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setIsRoot:(BOOL)a0;

@end
