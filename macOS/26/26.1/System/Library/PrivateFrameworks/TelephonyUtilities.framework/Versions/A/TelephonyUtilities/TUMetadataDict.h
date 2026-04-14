@class NSString;

@interface TUMetadataDict : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *identificationLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSource:(id)a0 identificationLabel:(id)a1;

@end
