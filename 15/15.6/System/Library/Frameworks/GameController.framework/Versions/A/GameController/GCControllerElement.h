@class NSString, NSSet, NSMutableSet;
@protocol GCDevice;

@interface GCControllerElement : NSObject {
    NSMutableSet *_aliases;
}

@property (weak, nonatomic) id<GCDevice> device;
@property (weak, nonatomic) GCControllerElement *collection;
@property char updatePending;
@property float pendingValue;
@property (retain, nonatomic) NSString *primaryAlias;
@property (nonatomic) float deadzone;
@property (nonatomic) char remappable;
@property (nonatomic) int remappingKey;
@property (nonatomic) char mappableToSystemGestures;
@property (nonatomic, getter=isBoundToSystemGesture) char boundToSystemGesture;
@property (retain, nonatomic) NSString *unmappedNameLocalizationKey;
@property (retain, nonatomic) NSString *nameLocalizationKey;
@property (readonly, nonatomic, getter=isAnalog) char analog;
@property (nonatomic) long long preferredSystemGestureState;
@property (retain, nonatomic) NSString *sfSymbolsName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *unmappedSfSymbolsName;
@property (retain, nonatomic) NSString *unmappedLocalizedName;
@property (readonly, copy, nonatomic) NSSet *aliases;

- (id)init;
- (void).cxx_destruct;
- (float)value;
- (char)_setValue:(float)a0;
- (void)setAliases:(id)a0;
- (char)_commitPendingValueOnQueue:(id)a0;
- (void)_resetPendingValue;
- (void)_setPendingValue:(float)a0;
- (char)_setPendingValueIfChanged:(float)a0;
- (char)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;

@end
