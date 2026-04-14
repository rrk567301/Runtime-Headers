@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector { void *__begin_; void *__end_; struct { void *__cap_; } ; BOOL mSorted; } mBundleComponentVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPath:(id)a0 infoPlistModDate:(double)a1 rsrcModDate:(double)a2;
- (void)loadAllComponents:(void *)a0;
- (void)scanWithPriority:(int)a0 loadable:(BOOL)a1 infoPlistPath:(id)a2;

@end
