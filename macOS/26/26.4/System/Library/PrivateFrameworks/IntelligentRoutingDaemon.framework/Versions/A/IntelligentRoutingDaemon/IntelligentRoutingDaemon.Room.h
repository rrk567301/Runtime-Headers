@class NSString;

@interface IntelligentRoutingDaemon.Room : NSObject {
    void /* unknown type, empty encoding */ uniqueIdentifier;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ accessories;
    void /* unknown type, empty encoding */ classification;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
