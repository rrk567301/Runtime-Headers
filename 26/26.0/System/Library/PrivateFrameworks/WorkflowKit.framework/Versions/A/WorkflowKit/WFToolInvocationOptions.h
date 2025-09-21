@class NSString;

@interface WFToolInvocationOptions : NSObject {
    void /* function */ locale;
    void /* function */ requestIdentifier;
    void /* function */ lnInterfaceIdiom;
}

@property (nonatomic, readonly) long long lnInteractionMode;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *lnInterfaceIdiom;

- (id)init;
- (void).cxx_destruct;

@end
