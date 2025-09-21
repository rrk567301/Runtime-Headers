@class NSString, NSNumber, NSArray;

@interface SGMailIntelligenceAttachmentProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSNumber *fileSizeInBytes;
@property (readonly, nonatomic) NSString *fileDescription;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSArray *authors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileName:(id)a0 fileSizeInBytes:(id)a1 fileDescription:(id)a2 keywords:(id)a3 authors:(id)a4;

@end
