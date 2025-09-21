@class FUSBProcess;

@interface FUSBWindow : NSObject <FUSBMutableWindowSettings>

@property (readonly, nonatomic) unsigned int windowID;
@property (weak, nonatomic) FUSBProcess *owner;
@property (nonatomic) unsigned int displayID;
@property (nonatomic) unsigned int contentState;

- (id)debugDescription;
- (void)invalidate;
- (id)initWithIdentifier:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;

@end
