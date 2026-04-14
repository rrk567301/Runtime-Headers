@class InsertResponse, MarkForDeletionResponse, OptInOutResponse;

@interface BatchUpdateResponse_UpdateResponseData : GPBMessage

@property (readonly, nonatomic) int responseDataOneOfCase;
@property (retain, nonatomic) InsertResponse *insertResponse;
@property (retain, nonatomic) MarkForDeletionResponse *markForDeletionResponse;
@property (retain, nonatomic) OptInOutResponse *optInOutResponse;

+ (id)descriptor;

@end
