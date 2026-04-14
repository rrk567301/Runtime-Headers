@class NSArray, SHKSharingServicePicker;
@protocol SHKMenuControllerDelegate, NSSharingServicePickerDelegate;

@interface NSSharingServicePickerReserved : NSObject {
    id<NSSharingServicePickerDelegate> delegate;
    id<SHKMenuControllerDelegate> shkDelegate;
    SHKSharingServicePicker *picker;
    NSArray *items;
    long long style;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
