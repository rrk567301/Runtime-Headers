@class NSString, NSArray, INImage;

@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isRestricted;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *transportBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceModelIdentifier;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSArray *formattedHandles;
@property (readonly, nonatomic) INImage *donatedImage;
@property (readonly, nonatomic) char isGroup;
@property (readonly, nonatomic) char isPlaceholder;
@property (readonly, nonatomic) char isTapToRadar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TTRPeopleSuggestion;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 transportBundleIdentifier:(id)a2 contact:(id)a3 deviceModelIdentifier:(id)a4;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 transportBundleIdentifier:(id)a2 contacts:(id)a3 formattedHandles:(id)a4 donatedImage:(id)a5 placeholder:(char)a6;

@end
