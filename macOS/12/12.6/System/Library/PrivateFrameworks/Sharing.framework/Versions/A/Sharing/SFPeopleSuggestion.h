@class NSString, NSArray, INImage;

@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *transportBundleIdentifier;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) INImage *donatedImage;
@property (nonatomic) BOOL isRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
