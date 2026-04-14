@class NSMutableDictionary;

@interface FPImportCookie : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *entries;

- (BOOL)hasExpired;
- (BOOL)isEmpty;
- (id)description;
- (void)addEntry:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)providersWithOngoingImport;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)a0;

@end
