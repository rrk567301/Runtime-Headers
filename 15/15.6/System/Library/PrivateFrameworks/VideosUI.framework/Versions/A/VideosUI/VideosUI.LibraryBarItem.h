@class NSString;

@interface VideosUI.LibraryBarItem : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ pageContextData;
    void /* unknown type, empty encoding */ promptOnly;
    void /* unknown type, empty encoding */ sideBarIconResource;
    void /* unknown type, empty encoding */ iconResource;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
