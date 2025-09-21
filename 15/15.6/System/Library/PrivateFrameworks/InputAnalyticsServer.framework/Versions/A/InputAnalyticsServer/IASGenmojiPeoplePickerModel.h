@class NSString, NSDate, NSNumber, IASGenmojiFacePickerModel;

@interface IASGenmojiPeoplePickerModel : NSObject

@property (nonatomic) char peoplePickerAppeared;
@property (nonatomic) char peoplePickerActive;
@property (copy, nonatomic) NSDate *facePickerAppearTime;
@property (nonatomic) char facePickerActive;
@property (copy, nonatomic) NSNumber *numPhotosInGrid;
@property (retain, nonatomic) NSString *selectedPickerType;
@property (retain, nonatomic) IASGenmojiFacePickerModel *facePickerModel;

+ (char)willHandleSignal:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)consumeAction:(id)a0;
- (char)facePickerAppeared;

@end
