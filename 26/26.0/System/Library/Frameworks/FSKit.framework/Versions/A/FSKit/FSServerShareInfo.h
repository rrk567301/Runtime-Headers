@class NSString, NSDictionary;

@interface FSServerShareInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *displayName;
@property (copy) NSString *connectedByUser;
@property long long howConnected;
@property (getter=isAlreadyConnected) BOOL alreadyConnected;
@property BOOL hasPassword;
@property (getter=isHidden) BOOL hidden;
@property (getter=isPrinterShare) BOOL printerShare;
@property (copy) NSDictionary *additionalInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
