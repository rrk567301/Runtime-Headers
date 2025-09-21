@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pendingWithIdentifier:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (char)_applyArchiveDictionary:(id)a0;
- (id)archiveDictionary;
- (void)_archiveIntoDictionary:(id)a0;
- (char)applyArchiveDictionary:(id)a0;
- (char)isEqualToAutoSettings:(id)a0;

@end
