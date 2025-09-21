@class NSString;

@interface SCWWatchlistRenameWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSString *updatedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithWatchlistIdentifier:(id)a0 updatedName:(id)a1;

@end
