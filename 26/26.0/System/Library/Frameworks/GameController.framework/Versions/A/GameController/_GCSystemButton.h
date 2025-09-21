@class NSString, GCFLocalizedString;

@interface _GCSystemButton : NSObject <NSObject> {
    _Atomic BOOL _invalid;
    GCFLocalizedString *_localizedName;
    NSString *_sfSymbolName;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
