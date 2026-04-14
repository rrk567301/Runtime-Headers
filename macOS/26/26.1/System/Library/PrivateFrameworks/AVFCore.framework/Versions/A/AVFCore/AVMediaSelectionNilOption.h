@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (BOOL)isPlayable;
- (id)group;
- (id)dictionary;
- (id)_groupMediaType;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
