@class NSString;

@interface BookFoundation.MGenre : BookFoundation.MResource <BFMGenre> {
    void /* function */ name;
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;

@end
