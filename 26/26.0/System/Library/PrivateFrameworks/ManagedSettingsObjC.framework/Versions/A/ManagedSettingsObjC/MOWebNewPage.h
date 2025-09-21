@class NSString;

@interface MOWebNewPage : NSObject <MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long pageType;
@property (readonly) NSString *homepageURL;
@property (readonly) NSString *extensionIdentifier;

+ (id)startPage;
+ (id)initializeWithPersistableValue:(id)a0;
+ (id)extensionPageWithIdentifier:(id)a0;
+ (id)homepageWithURL:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;

@end
