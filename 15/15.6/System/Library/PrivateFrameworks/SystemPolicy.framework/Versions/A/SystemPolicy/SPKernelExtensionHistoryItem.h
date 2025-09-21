@class NSString, NSDate;

@interface SPKernelExtensionHistoryItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *cdHash;
@property (readonly, nonatomic) char isNotarized;
@property (readonly, nonatomic) char isDeprecated;
@property (readonly, nonatomic) char isUnsupported;
@property (readonly, nonatomic) char isCodeless;
@property (readonly, nonatomic) NSDate *lastUsed;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0 teamID:(id)a1 bundleID:(id)a2 cdHash:(id)a3 isNotarized:(char)a4 isDeprecated:(char)a5 isUnsupported:(char)a6 isCodeless:(char)a7 lastUsed:(id)a8;

@end
