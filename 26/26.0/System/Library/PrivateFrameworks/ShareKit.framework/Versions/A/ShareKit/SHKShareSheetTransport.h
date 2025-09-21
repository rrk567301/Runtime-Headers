@class NSUUID, NSString, NSFileHandle;

@interface SHKShareSheetTransport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImageIdentifier;
@property (nonatomic) BOOL isSymbolImageIdentifier;
@property (retain, nonatomic) NSFileHandle *imageFileHandle;
@property (nonatomic) BOOL isSymbolImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
