@class NSString, DEDExtensionIdentifier;

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying>

@property (nonatomic) char requiresDataClassBAccessToRun;
@property (retain) NSString *identifier;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) NSString *name;
@property (retain) NSString *localizedConsentText;
@property (retain) NSString *localizedDataCollectedExplanation;
@property (retain) NSString *localizedDataCollectedSummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)a0;
+ (id)extensionWithDictionary:(id)a0;

@end
