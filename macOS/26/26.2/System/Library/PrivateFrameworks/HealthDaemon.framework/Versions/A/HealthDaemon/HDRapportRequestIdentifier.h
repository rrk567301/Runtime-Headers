@class NSString;

@interface HDRapportRequestIdentifier : NSObject

@property (readonly, nonatomic) long long schemaIdentifier;
@property (readonly, copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSchemaIdentifier:(long long)a0 name:(id)a1;

@end
