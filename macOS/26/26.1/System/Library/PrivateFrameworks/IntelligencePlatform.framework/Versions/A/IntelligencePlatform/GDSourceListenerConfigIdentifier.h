@class NSString;

@interface GDSourceListenerConfigIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *view;
@property (readonly, nonatomic) NSString *sourceType;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) NSString *updateType;
@property (readonly, nonatomic) NSString *sourceIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithView:(id)a0 sourceType:(id)a1 index:(int)a2 updateType:(id)a3 sourceIdentifier:(id)a4;
- (BOOL)isEqualToGDSourceListenerConfigIdentifier:(id)a0;

@end
