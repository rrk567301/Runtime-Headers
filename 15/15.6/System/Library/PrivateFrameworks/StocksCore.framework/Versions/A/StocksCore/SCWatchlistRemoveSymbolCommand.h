@class NSString;

@interface SCWatchlistRemoveSymbolCommand : NSObject <SCWZoneCommand>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbol:(id)a0;
- (void)executeWithZone:(id)a0;

@end
