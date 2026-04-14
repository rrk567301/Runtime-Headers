@class NSString;

@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enabled;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToFeature:(id)a0;

@end
