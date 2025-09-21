@class NSString;

@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enabled;

- (id)jsonRepresentation;
- (long long)compare:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToFeature:(id)a0;

@end
