@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)dictionary;
- (id)group;
- (id)_groupID;
- (id)initWithGroup:(id)a0;
- (BOOL)isPlayable;
- (BOOL)_representsNilSelection;
- (id)_groupMediaType;

@end
