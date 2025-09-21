@class NSMutableDictionary;

@interface FPImportCookie : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *entries;

- (BOOL)hasExpired;
- (BOOL)isEmpty;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)addEntry:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)providersWithOngoingImport;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)a0;

@end
