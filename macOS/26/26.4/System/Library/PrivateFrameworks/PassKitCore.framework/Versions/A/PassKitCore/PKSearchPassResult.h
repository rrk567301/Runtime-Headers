@class NSString, NSData, NSArray;

@interface PKSearchPassResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSData *thumbnailData;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *contentDescription;
@property (retain, nonatomic) NSArray *groupPassUniqueIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
