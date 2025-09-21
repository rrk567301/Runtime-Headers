@class NSString, NSData;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long objectID;
@property (copy, nonatomic) NSString *remoteDebugDescription;
@property (nonatomic) int pid;
@property (nonatomic) char isApplicationElement;
@property (copy, nonatomic) NSString *bridgeDelegateToken;
@property (copy, nonatomic) NSData *rawElementData;
@property (nonatomic) char didPopuldateAppInfo;
@property (copy, nonatomic) id /* block */ remoteDescriptionBlock;

+ (void)initialize;
+ (id)allowedDecodableClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
