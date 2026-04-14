@class NSMutableDictionary;

@interface VCPSearchContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_entities;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)entities;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntities:(id)a0;
- (void)addIdentifiers:(id)a0 forType:(long long)a1;
- (void)setIdentifiers:(id)a0 forType:(long long)a1;

@end
