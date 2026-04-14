@class NSString, NSDate, NSNumber, IASGenmojiFacePickerModel;

@interface IASGenmojiPeoplePickerModel : NSObject

@property (nonatomic) BOOL peoplePickerAppeared;
@property (nonatomic) BOOL peoplePickerActive;
@property (copy, nonatomic) NSDate *facePickerAppearTime;
@property (nonatomic) BOOL facePickerActive;
@property (copy, nonatomic) NSNumber *numPhotosInGrid;
@property (retain, nonatomic) NSString *selectedPickerType;
@property (retain, nonatomic) IASGenmojiFacePickerModel *facePickerModel;

+ (BOOL)willHandleSignal:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)consumeAction:(id)a0;
- (BOOL)facePickerAppeared;

@end
