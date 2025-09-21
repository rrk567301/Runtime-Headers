@class NSString, _TtC17SpotlightServices18SSMontaraUtilities;

@interface SpotlightServices.SSMontaraUtilities : NSObject {
    void /* unknown type, empty encoding */ suite;
}

@property (class, nonatomic, readonly) _TtC17SpotlightServices18SSMontaraUtilities *sharedInstance;

@property (nonatomic) BOOL isEnabled;
@property (nonatomic, readonly) NSString *selectedModelLocalizedName;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
