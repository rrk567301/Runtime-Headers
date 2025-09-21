@class NSString, NSDictionary;
@protocol MFTimeStamp;

@interface MediaPlaybackCore.PlayerSourcedUserAction : _TtCs12_SwiftObject <MFUserAction> {
    void /* function */ identifier;
    void /* function */ options;
    void /* function */ sourceID;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic, retain) id<MFTimeStamp> timeStamp;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSString *sourceID;

@end
