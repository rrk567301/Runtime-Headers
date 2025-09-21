@class NSUUID, NSString, NSFileHandle;

@interface SHKShareSheetTransport : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSFileHandle *imageFileHandle;
@property (nonatomic, getter=isSymbolImage) char symbolImage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
