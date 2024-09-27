Rect Rect:: operator+(Rect val){
    Rect temp;

	temp.setX(x+val.getX());
	temp.setY(y+val.getY());
	return temp;
}