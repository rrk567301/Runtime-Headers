@class NSData, NSString, MRPlayerPath, _MRPlaybackSessionMigrateRequestProtobuf, MRPlaybackSessionRequest, NSError, MRSendCommandResultStatus, MRPlaybackSessionMigrateAnalytics, MRContentItem;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {
    _MRPlaybackSessionMigrateRequestProtobuf *_protobuf;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSError *_migrateError;
    NSError *_fallbackError;
    BOOL _finalized;
    MRPlaybackSessionMigrateAnalytics *_analytics;
}

@property (nonatomic) unsigned int destinationTypes;
@property (nonatomic) long long playerOptions;
@property (nonatomic) long long endpointOptions;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long fallbackReason;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic) unsigned long long playbackSessionSize;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRContentItem *contentItem;
@property (nonatomic) BOOL allowFadeTransition;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) int recipeType;
@property (retain, nonatomic) MRSendCommandResultStatus *setPlaybackSessionCommandStatus;
@property (nonatomic) unsigned int originatorType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *report;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (retain, nonatomic) MRPlaybackSessionRequest *playbackSessionRequest;
@property (readonly, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *protobuf;
@property (readonly, nonatomic) NSData *protobufData;

- (void)finalize;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)merge:(id)a0;
- (id)init;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addDestinationTypesFromDevices:(id)a0;
- (void)endEventWithID:(unsigned int)a0;
- (void)addDestinationType:(unsigned int)a0;
- (void)addEventInput:(id)a0 withKey:(id)a1 toEventID:(unsigned int)a2;
- (void)addEventOutput:(id)a0 withKey:(id)a1 toEventID:(unsigned int)a2;
- (void)endEventWithID:(unsigned int)a0 error:(id)a1;
- (void)setOriginatorTypeFromDevice:(id)a0;
- (unsigned int)startEvent:(id)a0 role:(int)a1;

@end
