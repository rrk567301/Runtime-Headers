@class NSArray, NSMutableSet, NSValue, NSObject, FI_TPreviewOptionsGroup;
@protocol TPreviewOptionsGroupSettingsDelegate;

@interface FI_TPreviewOptionsGroupSettings : NSObject {
    struct TNSWeakPtr<NSObject<TPreviewOptionsGroupSettingsDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
}

@property (readonly, nonatomic) FI_TPreviewOptionsGroup *group;
@property (readonly, nonatomic) BOOL allDisabled;
@property (nonatomic) BOOL allEnabled;
@property (copy, nonatomic) NSMutableSet *activeKeys;
@property (weak, nonatomic) NSObject<TPreviewOptionsGroupSettingsDelegate> *delegate;
@property (readonly, nonatomic) NSArray *orderedActiveKeys;
@property (readonly, nonatomic) BOOL isModifiedFromDefaults;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGroup:(id)a0;
- (void)_setEnabled:(BOOL)a0 forKey:(id)a1;
- (BOOL)isModifiedFromDefaults;
- (void)setEnabled:(BOOL)a0 forKey:(id)a1;
- (BOOL)keyIsEnabled:(id)a0;
- (void)setAllEnabled:(BOOL)a0;
- (BOOL)allEnabled;
- (BOOL)allDisabled;

@end
