@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString *_personaIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) NSString *organizationName;

+ (id)allLoggedInAccountDescriptors;
+ (void)clearAccountDescriptorCache;
+ (id)accountDescriptorForURL:(id)a0;
+ (id)accountDescriptorForPersonaID:(id)a0;
+ (BOOL)mightHaveDataSeparatedAccountDescriptor;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)personaIdentifier;
- (id)initWithPersonaIdentifier:(id)a0 accountIdentifier:(id)a1 organizationName:(id)a2 dataSeparated:(BOOL)a3;

@end
