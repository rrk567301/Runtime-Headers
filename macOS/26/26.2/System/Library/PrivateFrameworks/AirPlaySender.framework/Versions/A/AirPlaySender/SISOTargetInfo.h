@class NSString;

@interface SISOTargetInfo : NSObject

@property (readonly, retain, nonatomic) NSString *idsDeviceIdentifier;
@property (retain, nonatomic) NSString *psi;
@property (nonatomic) BOOL inBubble;
@property (nonatomic) BOOL visibleToRapport;
@property (nonatomic) BOOL isAcceptable;

- (id)initWithIDSDeviceIdentifier:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
