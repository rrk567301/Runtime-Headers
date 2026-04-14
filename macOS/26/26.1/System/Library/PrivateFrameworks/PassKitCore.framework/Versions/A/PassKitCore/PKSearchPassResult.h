@class NSString, NSData, NSArray;

@interface PKSearchPassResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSData *thumbnailData;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *contentDescription;
@property (retain, nonatomic) NSArray *groupPassUniqueIdentifiers;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
