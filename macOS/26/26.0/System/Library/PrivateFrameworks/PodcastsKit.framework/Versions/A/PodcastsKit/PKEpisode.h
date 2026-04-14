@class PKEpisodeStoreId, NSString, PKShow, NSDate;

@interface PKEpisode : NSObject <NSSecureCoding> {
    void /* function */ title;
    void /* unknown type, empty encoding */ releaseDate;
    void /* function */ guid;
    void /* function */ uuid;
    void /* function */ streamUrl;
    void /* function */ episodeUuid;
}

@property (class, nonatomic) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) long long mediaTaskType;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) PKEpisodeStoreId *storeId;
@property (nonatomic, readonly) PKShow *show;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, readonly) NSString *streamUrl;
@property (nonatomic, copy) NSString *episodeUuid;

+ (id)contentFrom:(id)a0;
+ (id)itemFrom:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 releaseDate:(id)a1 isExplicit:(BOOL)a2 duration:(double)a3 storeId:(id)a4 show:(id)a5 guid:(id)a6 uuid:(id)a7 streamUrl:(id)a8;
- (void)updateForDatabaseMatch;

@end
