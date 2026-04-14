@class NSString;

@interface TUMetadataDict : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *identificationLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 identificationLabel:(id)a1;

@end
