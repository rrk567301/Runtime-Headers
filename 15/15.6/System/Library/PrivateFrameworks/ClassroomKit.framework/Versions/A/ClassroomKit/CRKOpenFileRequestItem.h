@class NSData, NSString;

@interface CRKOpenFileRequestItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSString *fileName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
