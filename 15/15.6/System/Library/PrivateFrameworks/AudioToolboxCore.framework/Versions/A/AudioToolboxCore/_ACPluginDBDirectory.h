@class _ACPluginDB, NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {
    _ACPluginDB *mDB;
    NSString *mFullPath;
    double mModificationDate;
    int mPriority;
    NSMutableDictionary *mBundlesByName;
    struct __FSEventStream { } *mFSMonitor;
    double mCurrentModificationDate;
    NSData *mCarbonComponentHash;
    char mComponentsLoadable;
    NSMutableArray *mChangedBundlePaths;
    unsigned long long mNrOfPathsChanged;
    BOOL mShouldRescan;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)bundlesChanged:(id)a0 shouldRescan:(BOOL)a1;
- (void)eventStreamCallback:(id)a0 flags:(const unsigned int *)a1;
- (id)initWithPath:(id)a0 priority:(int)a1;
- (void)loadAllComponents:(void *)a0;
- (void)monitorDirectory;
- (BOOL)refreshModificationDate;
- (id)scanBundle:(id)a0 loadable:(char)a1;
- (void)scanDirectory;
- (char)updateCarbonComponentHash;

@end
