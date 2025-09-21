@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)dictionary;
- (id)group;
- (id)initWithGroup:(id)a0;
- (id)_groupMediaType;
- (id)_groupID;
- (char)_representsNilSelection;
- (char)isPlayable;

@end
