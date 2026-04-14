@class NSString;

@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enabled;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqualToFeature:(id)a0;

@end
