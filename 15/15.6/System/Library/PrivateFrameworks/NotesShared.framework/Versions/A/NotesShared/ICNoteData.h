@class NSData, ICNote;

@interface ICNoteData : NSManagedObject

@property (nonatomic, getter=isSettingNoteData) char settingNoteData;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (retain, nonatomic) NSData *cryptoTag;
@property (nonatomic) char needsToBeSaved;
@property (nonatomic) char didBlockLastSave;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSData *primitiveData;

- (void)willAccessValueForKey:(id)a0;
- (void)willSave;
- (char)saveNoteDataIfNeeded;
- (void)setCryptoInitializationVector:(id)a0;
- (void)setCryptoTag:(id)a0;

@end
