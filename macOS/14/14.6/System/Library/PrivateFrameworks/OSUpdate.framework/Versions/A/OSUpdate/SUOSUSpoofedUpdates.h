@class NSString, SUSharedPrefs;

@interface SUOSUSpoofedUpdates : NSObject

@property (readonly) SUSharedPrefs *prefManager;
@property (readonly) BOOL shouldSpoofMajorOSUpdate;
@property (readonly) BOOL shouldSpoofMinorOSUpdate;
@property (readonly) NSString *getReadmeOverridePath;

- (void).cxx_destruct;
- (id)initWithSUPref:(id)a0;
- (id)createSpoofUpdates;

@end
