@class NSString, NSNumber;

@interface SCWWatchlistUpdateDisplayStateInWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (id)initWithWatchlistIdentifier:(id)a0 displayState:(id)a1;

@end
