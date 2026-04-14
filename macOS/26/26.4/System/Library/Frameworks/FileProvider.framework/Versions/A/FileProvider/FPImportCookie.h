@class NSMutableDictionary;

@interface FPImportCookie : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *entries;

- (BOOL)hasExpired;
- (void)addEntry:(id)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)providersWithOngoingImport;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)a0;

@end
